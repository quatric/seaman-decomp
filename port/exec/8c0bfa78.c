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
undefined4 FUN_8c0bfa78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bfa78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 320; for (int i_ = 0; i_ < 320; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be78);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c13be7c);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c13be80);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c13be84);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c13be88);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c13be8c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c13be90);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c13be94);
  (*(float *)(fr0_ - 0x4c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13be98);
  (*(float *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13be9c);
  (*(float *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13bea0);
  (*(float *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13bea4);
  (*(float *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13bea8);
  (*(float *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13beac);
  (*(float *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13beb0);
  (*(float *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c13beb4);
  (*(float *)(fr0_ - 0x6c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13beb8);
  (*(float *)(fr0_ - 0x68)) = (*(undefined1 *)(unsigned)0x8c13bebc);
  (*(float *)(fr0_ - 0x64)) = (*(undefined1 *)(unsigned)0x8c13bec0);
  (*(float *)(fr0_ - 0x60)) = (*(undefined1 *)(unsigned)0x8c13bec4);
  (*(float *)(fr0_ - 0x5c)) = (*(undefined1 *)(unsigned)0x8c13bec8);
  (*(float *)(fr0_ - 0x58)) = (*(undefined1 *)(unsigned)0x8c13becc);
  (*(float *)(fr0_ - 0x54)) = (*(undefined1 *)(unsigned)0x8c13bed0);
  (*(float *)(fr0_ - 0x50)) = (*(undefined1 *)(unsigned)0x8c13bed4);
  (*(undefined4 *)(fr0_ - 0x8c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13bed8);
  (*(undefined4 *)(fr0_ - 0x88)) = (*(undefined1 *)(unsigned)0x8c13bedc);
  (*(undefined4 *)(fr0_ - 0x84)) = (*(undefined1 *)(unsigned)0x8c13bee0);
  (*(undefined4 *)(fr0_ - 0x80)) = (*(undefined1 *)(unsigned)0x8c13bee4);
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c0162f8((fr0_ + (int)0xffffff60),ar5,ar6,ar7));
  (*(undefined2 *)(fr0_ - 0x7c)) = 0;
  (*(undefined2 *)(fr0_ - 0x7a)) = 0xff;
  (*(undefined2 *)(fr0_ - 0x78)) = 0;
  (*(undefined2 *)(fr0_ - 0x76)) = 0x80;
  (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
  (*(undefined2 *)(fr0_ - 0x72)) = 0x80;
  (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
  (*(undefined2 *)(fr0_ - 0x6e)) = 0xff;
  uVar4 = 4;
  puVar3 = (undefined4 *)(unsigned)0x8c43654c;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(undefined4 *)(fr0_ - 0x2c)),0x8c43654c,4); });
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),&(*(undefined2 *)(fr0_ - 0x7c)),puVar3,uVar4));
  uVar1 = 0x80000060;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c015198((fr0_ + (int)0xffffff60),0x80000060,puVar3,uVar4); });
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01538c(ar5,uVar1,puVar3,uVar4));
  uVar1 = 0xc;
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c014a94(ar5,0xc,puVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),uVar1,puVar3,uVar4));
  if (*(int *)(unsigned)(ar4 + 0xc) == 0) {
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c014a94(ar5,0xc,puVar3,uVar4));
    if (*(int *)(unsigned)(ar4 + 0x24) == 1) {
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x4c)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x4c)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x48)));
      }
      else {
        (*(float *)(fr0_ - 0x4c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x48)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x48)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x44)));
      }
      else {
        (*(float *)(fr0_ - 0x48)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x44)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x44)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x44)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x40)));
      }
      else {
        (*(float *)(fr0_ - 0x44)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x40)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x40)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x40)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x40)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x3c)));
      }
      else {
        (*(float *)(fr0_ - 0x40)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x3c)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x38)),(*(float *)(fr0_ - 0x3c)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x3c)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x3c)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x38)));
      }
      else {
        (*(float *)(fr0_ - 0x3c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x38)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x38)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x38)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x34)));
      }
      else {
        (*(float *)(fr0_ - 0x38)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x34)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x34)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x34)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x30)));
      }
      else {
        (*(float *)(fr0_ - 0x34)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x30)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
        dVar5 = -7.588929071877633e-251;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x30)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x30)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
        (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (*(undefined2 *)(fr0_ - 0x7c)) = 0;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar1 = 4;
      puVar3 = &(*(undefined4 *)(fr0_ - 0x8c));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x4c)),puVar3,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar1));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar1));
      (*(undefined2 *)(fr0_ - 0x7c)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar4 = 4;
      puVar3 = (undefined4 *)(unsigned)0x8c43654c;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x6c)),0x8c43654c,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
    }
    else {
      (*(undefined2 *)(fr0_ - 0x7c)) = 0;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar4 = 4;
      uVar1 = 0x8c43654c;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x4c)),0x8c43654c,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,uVar1,uVar4));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,uVar1,uVar4));
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x6c)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x68)),(*(float *)(fr0_ - 0x6c)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x6c)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x6c)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x68)));
      }
      else {
        (*(float *)(fr0_ - 0x6c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x68)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x64)),(*(float *)(fr0_ - 0x68)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x68)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x68)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x64)));
      }
      else {
        (*(float *)(fr0_ - 0x68)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x64)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x60)),(*(float *)(fr0_ - 0x64)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x64)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x64)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x60)));
      }
      else {
        (*(float *)(fr0_ - 0x64)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x60)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x5c)),(*(float *)(fr0_ - 0x60)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x60)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x60)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x5c)));
      }
      else {
        (*(float *)(fr0_ - 0x60)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x5c)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x58)),(*(float *)(fr0_ - 0x5c)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x5c)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x5c)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x58)));
      }
      else {
        (*(float *)(fr0_ - 0x5c)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x58)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x54)),(*(float *)(fr0_ - 0x58)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x58)) = F32LO(dVar5) - F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x58)) = SUB84(dVar5 - dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x54)));
      }
      else {
        (*(float *)(fr0_ - 0x58)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x54)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x50)),(*(float *)(fr0_ - 0x54)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x54)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x54)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D(0x41200000,(*(float *)(fr0_ - 0x50)));
      }
      else {
        (*(float *)(fr0_ - 0x54)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x50)) = F32HI(in_xd0);
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x4c)),(*(float *)(fr0_ - 0x50)));
        dVar5 = 2.72155285368112e-312;
      }
      if (cVar6 == '\0') {
        (*(float *)(fr0_ - 0x50)) = F32LO(dVar5) + F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x50)) = SUB84(dVar5 + dVar5,0);
      }
      if (cVar7 != '\0') {
        (*(float *)(fr0_ - 0x50)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x4c)) = F32HI(in_xd0);
      }
      (*(undefined2 *)(fr0_ - 0x7c)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x7a)) = 0x7f;
      (*(undefined2 *)(fr0_ - 0x78)) = 0x80;
      (*(undefined2 *)(fr0_ - 0x76)) = 0;
      (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x72)) = 0;
      (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
      (*(undefined2 *)(fr0_ - 0x6e)) = 0x7f;
      uVar4 = 4;
      puVar3 = &(*(undefined4 *)(fr0_ - 0x8c));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xa0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 320)); FUN_8c016318((fr0_ + (int)0xffffff60),&(*(float *)(fr0_ - 0x6c)),puVar3,4); });
      puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0xc) == 1) {
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c014a94(ar5,0xb,puVar3,uVar4));
    (*(undefined2 *)(fr0_ - 0x7c)) = 0;
    (*(undefined2 *)(fr0_ - 0x7a)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x78)) = 0;
    (*(undefined2 *)(fr0_ - 0x76)) = 0;
    (*(undefined2 *)(fr0_ - 0x74)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x72)) = 0;
    (*(undefined2 *)(fr0_ - 0x70)) = 0xff;
    (*(undefined2 *)(fr0_ - 0x6e)) = 0xff;
    puVar2 = &(*(undefined2 *)(fr0_ - 0x7c));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c016324((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
    (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c01636c((fr0_ + (int)0xffffff60),puVar2,puVar3,uVar4));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 320)), free_if_nonnull_wrap_0151a0((fr0_ + (int)0xffffff60),0xffffffff,puVar3,uVar4));
  return uVar1;
}

__asm__(".globl _FUN_8c0bfa78\n.set _FUN_8c0bfa78, _FUN_8c0bfa78_def\n");
