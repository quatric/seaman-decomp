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
undefined4 FUN_8c05c28c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c05c28c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  double in_dr12 = 0;
  undefined4 uVar9;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_xyz((int)&(*(undefined8 *)(fr0_ - 0x30)) + 4,ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x2b8) == 2) {
    uVar2 = 0;
    goto LAB_8c05c608;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  if (cVar12 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x128);
  uVar8 = (undefined4)in_dr0;
  uVar9 = SUB84(in_dr14,0);
  if (iVar1 == 1) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41980000,uVar9);
      in_dr12 = 33554440.21484375;
      in_dr0 = CONCAT44(0x41d80000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x41d80000);
    }
    else {
      in_dr14 = 402653249.59375;
      in_dr12 = 1610612998.0;
      in_dr0 = 0xfe08c70541d80000;
      (*(undefined8 *)(fr0_ - 0x30)) = -1.296348781552367e+299;
    }
  }
  else if (iVar1 == 2) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41300000,uVar9);
      in_dr12 = 1048576.2567138672;
      in_dr0 = CONCAT44(0x41b80000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x41b80000);
    }
    else {
      in_dr14 = 402653249.1875;
      in_dr12 = 402653249.1875;
      in_dr0 = 0xfe08c70541b80000;
      (*(undefined8 *)(fr0_ - 0x30)) = -1.2963487811625545e+299;
    }
  }
  else if (iVar1 == 3) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41700000,uVar9);
      in_dr12 = 4294968348.5;
      in_dr0 = CONCAT44(0x42200000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x42200000);
    }
    else {
      in_dr14 = 805306498.875;
      in_dr12 = 34359746808.0;
      in_dr0 = 0xfe08c70f42200000;
      (*(undefined8 *)(fr0_ - 0x30)) = -1.2963567657906834e+299;
    }
  }
  else if (iVar1 == 4) {
    if (cVar12 == '\0') {
      in_dr14 = CONCAT44D(0x41600000,uVar9);
      in_dr12 = 15032387641.0;
      in_dr0 = CONCAT44(0x42280000,uVar8);
      (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)),0x42280000);
    }
    else {
      in_dr14 = 805306498.75;
      in_dr12 = 51539616006.0;
      in_dr0 = 0x12842280000;
      (*(undefined8 *)(fr0_ - 0x30)) = 6.28659126329025e-312;
    }
  }
  uVar8 = (undefined4)in_dr0;
  if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    fVar4 = F32LO(in_dr14);
    if (iVar1 == 5) {
      if (cVar11 == '\0' && F32HI(in_dr14) < fVar4) {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar5 = 7.498589249951456e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && F32HI(uVar7) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = -4.794955196358332e-255;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else if (iVar1 == 6) {
      if (cVar11 == '\0') {
        bVar10 = F32HI(in_dr12) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = (*(undefined8 *)(fr0_ - 0x30));
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30)),uVar8);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < F32HI(dVar5);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar5 = 6.876925718751272e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && F32HI(uVar7) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 6.566093943887814e+86;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 1.0035827136752305e+178;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 == 6) {
      fVar4 = F32LO(in_dr14);
      if (cVar11 != '\0' || fVar4 <= F32HI(in_dr14)) {
LAB_8c05c538:
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar5 = 1.3411048210842936e-08;
        }
        if (cVar11 == '\0') {
          fVar3 = F32LO(dVar5) - F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar3;
          fVar3 = *(float *)(unsigned)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        }
        uVar6 = (ulonglong)(uint)fVar3;
        if (cVar11 == '\0' && fVar3 < 0.0) {
          uVar6 = (ulonglong)(uint)fVar3;
          if (cVar12 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
          }
        }
      }
      else {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (!bVar10) goto LAB_8c05c538;
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar5 = 5.944430421950997e+86;
        }
        if (cVar11 == '\0') {
          fVar3 = F32LO(dVar5) + F32HI(dVar5);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar3;
          uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          uVar6 = *(ulonglong *)(unsigned)(ar4 + 0x24);
        }
        if (cVar11 == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (cVar12 == '\0') {
            uVar8 = *(undefined4 *)(unsigned)(ar4 + 0x24);
            uVar6 = CONCAT44(uVar8,(float)uVar6);
            *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar8;
          }
          else {
            uVar6 = *(ulonglong *)(unsigned)(ar4 + 0x24);
            *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar6;
          }
        }
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(in_dr12) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = (*(undefined8 *)(fr0_ - 0x30));
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x30)),(int)uVar6);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < F32HI(dVar5);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
            dVar5 = 5.322766890750813e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar5) + F32HI(dVar5);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(unsigned)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && F32HI(uVar7) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x28) = *(undefined8 *)(unsigned)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 6.545756141680556e+163;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3f666666,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar5 = 3.73996784729797e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
    }
  }
LAB_8c05c5ec:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
    uVar2 = 0;
  }
LAB_8c05c608:
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x30)) + 4,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c05c28c\n.set _FUN_8c05c28c, _FUN_8c05c28c_def\n");
