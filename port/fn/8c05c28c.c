#include "../decls.h"
undefined4 FUN_8c05c28c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  double in_dr12;
  undefined4 uVar9;
  double in_dr14;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff94;
  undefined8 uStack_30;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = 1;
  Vec3_ctor_xyz((int)&uStack_30 + 4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x2b8) == 2) {
    uVar2 = 0;
    goto LAB_8c05c608;
  }
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,in_stack_ffffff94);
  if (cVar12 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  iVar1 = *(int *)(ar4 + 0x128);
  uVar8 = (undefined4)in_dr0;
  uVar9 = SUB84(in_dr14,0);
  if (iVar1 == 1) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41980000,uVar9);
      in_dr12 = 33554440.21484375;
      in_dr0 = CONCAT44(0x41d80000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x41d80000);
    }
    else {
      in_dr14 = 402653249.59375;
      in_dr12 = 1610612998.0;
      in_dr0 = 0xfe08c70541d80000;
      uStack_30 = -1.296348781552367e+299;
    }
  }
  else if (iVar1 == 2) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41300000,uVar9);
      in_dr12 = 1048576.2567138672;
      in_dr0 = CONCAT44(0x41b80000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x41b80000);
    }
    else {
      in_dr14 = 402653249.1875;
      in_dr12 = 402653249.1875;
      in_dr0 = 0xfe08c70541b80000;
      uStack_30 = -1.2963487811625545e+299;
    }
  }
  else if (iVar1 == 3) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41700000,uVar9);
      in_dr12 = 4294968348.5;
      in_dr0 = CONCAT44(0x42200000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x42200000);
    }
    else {
      in_dr14 = 805306498.875;
      in_dr12 = 34359746808.0;
      in_dr0 = 0xfe08c70f42200000;
      uStack_30 = -1.2963567657906834e+299;
    }
  }
  else if (iVar1 == 4) {
    if (cVar12 == '\0') {
      in_dr14 = (double)CONCAT44(0x41600000,uVar9);
      in_dr12 = 15032387641.0;
      in_dr0 = CONCAT44(0x42280000,uVar8);
      uStack_30 = (double)CONCAT44((*(uint*)((uchar*)&uStack_30+4)),0x42280000);
    }
    else {
      in_dr14 = 805306498.75;
      in_dr12 = 51539616006.0;
      in_dr0 = 0x12842280000;
      uStack_30 = 6.28659126329025e-312;
    }
  }
  uVar8 = (undefined4)in_dr0;
  if (*(int *)(ar4 + 0x128) < 3) {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    fVar4 = SUB84(in_dr14,0);
    if (iVar1 == 5) {
      if (cVar11 == '\0' && (float)((ulonglong)in_dr14 >> 0x20) < fVar4) {
        if (cVar11 == '\0') {
          bVar10 = fVar4 < SUB84(in_dr12,0);
        }
        else {
          bVar10 = in_dr14 < in_dr12;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar5 = 7.498589249951456e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && (float)((ulonglong)uVar7 >> 0x20) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = -4.794955196358332e-255;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else if (iVar1 == 6) {
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)in_dr12 >> 0x20) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = uStack_30;
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44((undefined4)uStack_30,uVar8);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar5 = 6.876925718751272e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && (float)((ulonglong)uVar7 >> 0x20) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 6.566093943887814e+86;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 1.0035827136752305e+178;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
  else {
    iVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
    if (iVar1 == 6) {
      fVar4 = SUB84(in_dr14,0);
      if (cVar11 != '\0' || fVar4 <= (float)((ulonglong)in_dr14 >> 0x20)) {
LAB_8c05c538:
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar5 = 1.3411048210842936e-08;
        }
        if (cVar11 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar3;
          fVar3 = *(float *)(ar4 + 0x28);
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
        }
        uVar6 = (ulonglong)(uint)fVar3;
        if (cVar11 == '\0' && fVar3 < 0.0) {
          uVar6 = (ulonglong)(uint)fVar3;
          if (cVar12 == '\0') {
            *(undefined4 *)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x28) = uVar6;
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
          dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar5 = 5.944430421950997e+86;
        }
        if (cVar11 == '\0') {
          fVar3 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(ar4 + 0x28) = fVar3;
          uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          uVar6 = *(ulonglong *)(ar4 + 0x24);
        }
        if (cVar11 == '\0' && (float)(uVar6 >> 0x20) < (float)uVar6) {
          if (cVar12 == '\0') {
            uVar8 = *(undefined4 *)(ar4 + 0x24);
            uVar6 = CONCAT44(uVar8,(float)uVar6);
            *(undefined4 *)(ar4 + 0x28) = uVar8;
          }
          else {
            uVar6 = *(ulonglong *)(ar4 + 0x24);
            *(ulonglong *)(ar4 + 0x28) = uVar6;
          }
        }
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)in_dr12 >> 0x20) < fVar4;
      }
      else {
        bVar10 = in_dr12 < in_dr14;
      }
      if (bVar10) {
        dVar5 = uStack_30;
        if (cVar12 == '\0') {
          dVar5 = (double)CONCAT44((undefined4)uStack_30,(int)uVar6);
        }
        if (cVar11 == '\0') {
          bVar10 = fVar4 < (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          bVar10 = in_dr14 < dVar5;
        }
        if (bVar10) {
          if (cVar12 == '\0') {
            dVar5 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar5 = 5.322766890750813e+86;
          }
          if (cVar11 == '\0') {
            fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
          }
          else {
            fVar4 = SUB84(dVar5 + dVar5,0);
          }
          if (cVar12 == '\0') {
            *(float *)(ar4 + 0x28) = fVar4;
            uVar7 = CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28));
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
            uVar7 = *(undefined8 *)(ar4 + 0x24);
          }
          if (cVar11 == '\0' && (float)((ulonglong)uVar7 >> 0x20) < (float)uVar7) {
            if (cVar12 == '\0') {
              *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
            }
            else {
              *(undefined8 *)(ar4 + 0x28) = *(undefined8 *)(ar4 + 0x24);
            }
          }
          goto LAB_8c05c5ec;
        }
      }
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3dcccccd,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 6.545756141680556e+163;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 - dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
        fVar4 = *(float *)(ar4 + 0x28);
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
      if (cVar11 == '\0' && fVar4 < 0.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x28) = (ulonglong)(uint)fVar4;
        }
      }
    }
    else {
      if (cVar12 == '\0') {
        dVar5 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x28);
        dVar5 = 3.73996784729797e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x28) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x28) = in_xd0;
      }
    }
  }
LAB_8c05c5ec:
  iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x2b8) = 2;
    uVar2 = 0;
  }
LAB_8c05c608:
  Vec3_dtor((int)&uStack_30 + 4,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c05c28c\n.set _FUN_8c05c28c, _FUN_8c05c28c_def\n");
