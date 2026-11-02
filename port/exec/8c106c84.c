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
undefined4 * s_REACTION_TEMP_LACK_106c8a_def(int ar4,int *ar5,int ar6,char *ar7)

{
  ring[rp++ & 255] = "s_REACTION_TEMP_LACK_106c8a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int a6;
  float fVar5;
  ulonglong in_dr0 = 0;
  float fVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  a6 = ar6;
  if ((*(int *)(unsigned)(ar4 + 0x880) == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,0,ar6,ar7)), *(int *)(unsigned)(ar4 + 0x868) != iVar1)) {
    uVar4 = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,0,a6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x868) = uVar2;
    if (*(int *)(unsigned)(ar4 + 0x868) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar4,a6,ar7));
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41600000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x416e666641600000;
      }
      if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar4,a6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x416e6666,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = 0x8c02602c416e6666;
        }
        if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar4,a6,ar7)), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_TEMP_LACK";
          a6 = 0;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_TEMP_LACK"));
          *(undefined4 *)(unsigned)(ar4 + 0x880) = 1;
        }
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x884) == 0) {
    uVar2 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1a4))))(ar5,0,a6,ar7));
    if (iVar1 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),uVar2,a6,ar7));
      uVar4 = (undefined4)(in_dr0 >> 0x20);
      if (iVar1 == 4) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar2,a6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x41c8cccd,uVar4);
        }
        else {
          in_dr0 = 0x88841c8cccd;
        }
        if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar2,a6,ar7)), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_SWITCH_OFF";
          a6 = 0;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_SWITCH_OFF"));
          *(undefined4 *)(unsigned)(ar4 + 0x884) = 1;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x178))))(ar5,uVar2,a6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x41a0cccd,uVar4);
        }
        else {
          in_dr0 = 0x2dc41a0cccd;
        }
        if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
           (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar2,a6,ar7)), 2 < (ushort)uVar2)) {
          ar7 = "REACTION_SWITCH_OFF";
          a6 = 0;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_SWITCH_OFF"));
          *(undefined4 *)(unsigned)(ar4 + 0x884) = 1;
        }
      }
    }
  }
  puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x888));
  if ((puVar3 == (undefined4 *)(unsigned)0x0) &&
     (puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,1,a6,ar7)),
     ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x86c)) != puVar3)) {
    uVar4 = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1ac))))(ar5,1,a6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x86c) = uVar2;
    puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x86c));
    if (puVar3 == (undefined4 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x17c))))(ar5,uVar4,a6,ar7));
      if (cVar8 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = ((undefined4 *)(unsigned)0x8c106f4c);
      if (cVar8 == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = 65.0;
      }
      else {
        fVar5 = 65.0;
        fVar6 = 65.9;
      }
      if (cVar7 != '\0' || fVar6 <= fVar5) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x17c))))(ar5,uVar4,a6,ar7));
        if (cVar8 == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c106f50);
        if (cVar8 == '\0') {
          fVar6 = 65.9;
        }
        else {
          fVar5 = 65.9;
          fVar6 = 1.05378e-42;
        }
        if (cVar7 != '\0' || fVar5 <= fVar6) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),uVar4,a6,ar7));
          puVar3 = (undefined4 *)(unsigned)0x3;
          if (2 < (ushort)uVar2) {
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,"REACTION_OXYGEN_LACK"));
            puVar3 = (undefined4 *)(unsigned)0x888;
            *(undefined4 *)(unsigned)(ar4 + 0x888) = 1;
          }
        }
      }
    }
  }
  return puVar3;
}

__asm__(".globl _s_REACTION_TEMP_LACK_106c8a\n.set _s_REACTION_TEMP_LACK_106c8a, _s_REACTION_TEMP_LACK_106c8a_def\n");
