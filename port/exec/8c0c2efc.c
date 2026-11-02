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
undefined4 s_WARNING_NOPAD_0c2f08_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_WARNING_NOPAD_0c2f08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *ar5_00;
  undefined4 uVar8;
  int ar6_00;
  float fVar9;
  double in_dr0 = 0;
  undefined8 in_dr4 = 0;
  undefined8 in_xd0 = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  puVar7 = ((undefined1 *)(fr0_ - 0x30));
  puVar5 = ((undefined1 *)(unsigned)0x8c13bfb0);
  iVar4 = 10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if ((*(undefined1 *)(unsigned)0x8c436874) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436870) = 0;
    (*(undefined1 *)(unsigned)0x8c436874) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c43687c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436878) = 0;
    (*(undefined1 *)(unsigned)0x8c43687c) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c436884) == '\0') {
    *(unsigned *)0x8c436880 = (unsigned)(unsigned long)((char *)(unsigned)0xb);
    (*(undefined1 *)(unsigned)0x8c436884) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c43688c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436888) = 0x1f;
    (*(undefined1 *)(unsigned)0x8c43688c) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c436894) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436890) = 0xffffffff;
    (*(undefined1 *)(unsigned)0x8c436894) = '\x01';
  }
  if (ar5 == (char *)(unsigned)0xb) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c436890),ar6,ar7));
    if (iVar4 != 2) {
      (vsp = ((unsigned long)(fr0_ - 84)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c436890),ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c436890) = 0xffffffff;
    }
    uVar2 = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4365ec) = 0;
    *(unsigned *)0x8c436880 = (unsigned)(unsigned long)(ar5);
  }
  else {
    uVar2 = 4;
    ar6_00 = ar4 + 0x164;
    ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c016318(ar4 + 0xc,ar4 + 0x34,ar6_00,4); });
    iVar4 = ar4 + 0x174;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c016324(ar4 + 0xc,iVar4,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01538c(ar4 + 4,iVar4,ar6_00,uVar2));
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c014a94(ar4 + 4,ar5,ar6_00,uVar2));
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,uVar2));
    uVar8 = SUB84(in_dr0,0);
    switch((uint)ar5) {
    case 0x1:
      (*(undefined4 *)(unsigned)(unsigned)0x8c436870) = 0x113;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436878) = 0x91;
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c3aac(ar4,ar5_00,ar6_00,uVar2));
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbb4);
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); strcpy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c13cbb4),ar6_00,uVar2); });
      break;
    case 0x2:
      (*(undefined4 *)(unsigned)(unsigned)0x8c436870) = 0x114;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436878) = 0xeb;
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2));
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbd0);
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); strcpy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c13cbd0),ar6_00,uVar2); });
      break;
    case 0x3:
      (*(undefined4 *)(unsigned)(unsigned)0x8c436870) = 0xd5;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436878) = 0xe2;
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2));
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbde);
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); strcpy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c13cbde),ar6_00,uVar2); });
      break;
    case 0x4:
      (*(undefined4 *)(unsigned)(unsigned)0x8c436870) = 0xda;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436878) = 0xec;
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c3b10(ar4,ar5_00,ar6_00,uVar2));
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbc2);
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); strcpy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c13cbc2),ar6_00,uVar2); });
      break;
    case 0x5:
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2));
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbde);
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); strcpy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c13cbde),ar6_00,uVar2); });
      break;
    case 0x6:
      (*(undefined4 *)(unsigned)(unsigned)0x8c436870) = 0xa7;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436878) = 0xc6;
      if (cVar11 == '\0') {
        in_dr0 = CONCAT44D(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2));
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbd0);
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); strcpy(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c13cbd0),ar6_00,uVar2); });
    }
    if ((((ar5 == (char *)(unsigned)0x1) || (ar5 == (char *)(unsigned)0x4)) || (ar5 == (char *)(unsigned)0x2)) ||
       ((ar5 == (char *)(unsigned)0x6 || (ar5 == (char *)(unsigned)0x3)))) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), libgcc_divide_helper_010284(ar6,6,ar6_00,uVar2));
      sVar1 = (short)uVar2 + 1;
      *(short *)(unsigned)(ar4 + 0x184) = sVar1 * 0x10;
      *(short *)(unsigned)(ar4 + 0x188) = sVar1 * 0x10;
      *(short *)(unsigned)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
      *(short *)(unsigned)(ar4 + 400) = sVar1 * 0x10 + 0xf;
      *(undefined2 *)(unsigned)(ar4 + 0x186) = 0x5f;
      *(undefined2 *)(unsigned)(ar4 + 0x18a) = 0x40;
      *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0x40;
      *(undefined2 *)(unsigned)(ar4 + 0x192) = 0x5f;
      for (iVar4 = 0; fVar9 = F32LO(in_dr0), iVar4 < 4; iVar4 = iVar4 + 1) {
        pfVar3 = (float *)(unsigned)(ar4 + iVar4 * 8 + 0x54);
        if (cVar11 == '\0') {
          fVar9 = *pfVar3;
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)pfVar3;
        }
        if (cVar10 == '\0') {
          fVar9 = fVar9 + F32HI(in_dr4) + (float)(*(undefined4 *)(unsigned)(unsigned)0x8c436870);
        }
        else {
          fVar9 = SUB84((double)(*(undefined4 *)(unsigned)(unsigned)0x8c436870) + (double)(*(undefined4 *)(unsigned)(unsigned)0x8c436870),0);
        }
        if (cVar11 == '\0') {
          (&(*(float *)(fr0_ - 0x50)))[iVar4 * 2] = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(&(*(float *)(fr0_ - 0x50)) + iVar4 * 2) = in_xd0;
        }
        pfVar3 = (float *)(unsigned)(ar4 + iVar4 * 8 + 0x58);
        if (cVar11 == '\0') {
          fVar9 = *pfVar3;
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)pfVar3;
        }
        if (cVar10 == '\0') {
          in_dr0 = CONCAT44D((float)(*(undefined4 *)(unsigned)(unsigned)0x8c436878),
                                    fVar9 + (float)in_dr4 + (float)(*(undefined4 *)(unsigned)(unsigned)0x8c436878));
        }
        else {
          in_dr0 = (double)(*(undefined4 *)(unsigned)(unsigned)0x8c436878) + (double)(*(undefined4 *)(unsigned)(unsigned)0x8c436878);
        }
        if (cVar11 == '\0') {
          *(int *)(unsigned)(((undefined8 *)(fr0_ - 0x4c)) + iVar4) = SUB84(in_dr0,0);
        }
        else {
          ((undefined8 *)(fr0_ - 0x4c))[iVar4] = in_xd0;
        }
      }
      uVar2 = 4;
      ar6_00 = ar4 + 0x164;
      ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); FUN_8c016318(ar4 + 0x20,&(*(float *)(fr0_ - 0x50)),ar6_00,4); });
      iVar4 = ar4 + 0x184;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c016324(ar4 + 0x20,iVar4,ar6_00,uVar2));
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c01538c(ar4 + 4,iVar4,ar6_00,uVar2));
      ar5_00 = (char *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c014a94(ar4 + 4,0,ar6_00,uVar2));
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c016340(ar4 + 0x20,ar5_00,ar6_00,uVar2));
    }
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0c453c(ar4,ar5_00,ar6_00,uVar2));
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c436880) == ar5) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c021d90(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c436890),0,0));
    }
    else {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,uVar2));
      if (iVar4 == 1) {
        (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c0f8214(0x8c35468c,ar5_00,ar6_00,uVar2));
      }
      uVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c436890);
      iVar4 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c021f18(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c436890),ar6_00,uVar2));
      if (iVar4 != 2) {
        uVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c436890);
        (vsp = ((unsigned long)(fr0_ - 84)), pack_release_entry_handle(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c436890),ar6_00,uVar2));
        (*(undefined4 *)(unsigned)(unsigned)0x8c436890) = 0xffffffff;
      }
      (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c021d4c(0x8c2b59d0,uVar8,ar6_00,uVar2));
      *(unsigned *)0x8c436880 = (unsigned)(unsigned long)(ar5);
      (*(undefined4 *)(unsigned)(unsigned)0x8c436890) = (vsp = ((unsigned long)(fr0_ - 84)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(fr0_ - 0x30)),ar6_00,uVar2));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c021d90(0x8c2b59d0,(*(undefined4 *)(unsigned)(unsigned)0x8c436890),0,0));
    }
  }
  return uVar2;
}

__asm__(".globl _s_WARNING_NOPAD_0c2f08\n.set _s_WARNING_NOPAD_0c2f08, _s_WARNING_NOPAD_0c2f08_def\n");
