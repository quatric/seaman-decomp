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
undefined4 FUN_8c098b6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c098b6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125ff0),ar5,ar6,ar7));
  uVar3 = 0x8c2846a0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846a0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126000),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2846ac;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126010),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2846b8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846b8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126020),pcVar2,uVar3,ar7));
  uVar3 = 0x8c2846c4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 52)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2846c4,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126030) = CONCAT44((*(undefined1 *)(unsigned)0x8c126034),0x800000);
  }
  else {
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c126030) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x1c)),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c2846d0,uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c030e34(((undefined1 *)(fr0_ - 0x34)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c05d608(0x8c2846e8,uVar1,uVar3,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c098b6c\n.set _FUN_8c098b6c, _FUN_8c098b6c_def\n");
