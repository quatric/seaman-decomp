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
uint FUN_8c10f22a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f22a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  uint uVar2;
  short sVar3;
  int ar4_00;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 in_dr0 = 0;
  char cVar7;
  
  if ((*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') &&
     (*(char *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)))[1] + 0x30) != '\x01')) {
    if (*(char *)(unsigned)(ar4 + 0x3c) == '\0') {
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44(puVar5,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
      uVar6 = puVar5[1];
      iVar4 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111fbe(*puVar5,uVar6,ar6,ar7));
    }
    else {
      puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      ar7 = 1;
      ar6 = *(undefined4 *)(unsigned)(ar4 + 0x44);
      (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44(puVar5,(undefined4)(*(undefined8 *)(fr0_ - 0x14)));
      uVar6 = puVar5[1];
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111e72(*puVar5,uVar6,ar6,1));
      if ((uVar2 & 0xff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(unsigned)(ar4 + 0x44);
        ar6 = *(undefined4 *)(unsigned)(ar4 + 0x40);
        uVar6 = 0;
        (vsp = ((unsigned long)(fr0_ - 20)), memset(*(int *)(unsigned)(ar4 + 0x2c) * 4 + iVar4,0,ar6,ar7));
      }
    }
    if (iVar4 != 0) {
      uVar6 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111dfe(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 4),uVar6,ar6,ar7));
      (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)) = uVar6;
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c10f108(*(undefined4 *)(unsigned)(ar4 + 0x2c),iVar4,ar6,ar7));
      ar4_00 = ar4;
      uVar6 = (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4));
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c10f168(ar4,iVar4,(*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),ar7));
      cVar7 = '\0';
      (vsp = ((unsigned long)(fr0_ - 20)), thunk_FUN_8c013dfc(ar4_00,iVar4,uVar6,ar7));
      uVar1 = in_dr0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x14))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = (*(undefined8 *)(fr0_ - 0x14));
      }
      (*(undefined8 *)(fr0_ - 0x14)) = uVar1;
      cVar7 = '\0';
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c111cdc(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),&(*(undefined8 *)(fr0_ - 0x14)),1,ar7));
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x14)) = CONCAT44((undefined4)(*(undefined8 *)(fr0_ - 0x14)),0xc1daf5c2);
      }
      sVar3 = (short)(int)((F32HI((*(undefined8 *)(fr0_ - 0x14))) + (float)(*(undefined8 *)(fr0_ - 0x14))) * 4.3429446 *
                          100.0);
      if (0x708 < sVar3) {
        sVar3 = 0x708;
      }
      if ((int)*(short *)(unsigned)(ar4 + 0x48) < (int)sVar3) {
        *(short *)(unsigned)(ar4 + 0x48) = sVar3;
      }
      else {
        *(short *)(unsigned)(ar4 + 0x48) =
             (short)((uint)((*(short *)(unsigned)(ar4 + 0x48) + 0x1c20) * 64000) >> 0x10) + -0x1c20;
      }
    }
  }
  iVar4 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1] * 4 + *(int *)(unsigned)(iVar4 + 0x40)) == *(int *)(unsigned)(iVar4 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10f22a\n.set _FUN_8c10f22a, _FUN_8c10f22a_def\n");
