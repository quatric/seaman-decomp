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
int FUN_8c08e6e8_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c08e6e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 in_dr0 = 0;
  char cVar5;
  
  cVar5 = '\0';
  iVar4 = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 140)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 140)) - 8); FUN_8c03f480((*(undefined4 *)(fr0_ + 0x00000000)),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 140)), Vec3_ctor_copy(&(*(int *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 140)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c08e9b0(((undefined1 *)(fr0_ - 0x78)),uVar3,ar6,ar7));
  iVar2 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ar7 = 0;
      ar6 = (int *)(unsigned)0xffffffff;
      uVar3 = 5;
      (vsp = ((unsigned long)(fr0_ - 140)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 140)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      iVar4 = 0;
      break;
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c091d40(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018)),ar7));
      ar6 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018));
      break;
    default:
      ar6 = (int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))[1];
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c08fd38(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,(*(undefined4 *)(fr0_ + 0x0000000c))));
      ar7 = (*(undefined4 *)(fr0_ + 0x0000000c));
      if (iVar4 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 3:
      ar6 = (int *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))[1];
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c090bc4(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,(*(undefined4 *)(fr0_ + 0x0000000c))));
      ar7 = (*(undefined4 *)(fr0_ + 0x0000000c));
      break;
    case 4:
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000018)),*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,ar7));
      uVar1 = in_dr0;
      if (cVar5 == '\0') {
        (*(undefined8 *)(fr0_ - 0x18)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x18))+4)),(int)((ulonglong)in_dr0 >> 0x20));
        uVar1 = (*(undefined8 *)(fr0_ - 0x18));
      }
      (*(undefined8 *)(fr0_ - 0x18)) = uVar1;
      ar6 = &(*(int *)(fr0_ - 0x1c));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c091924(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,ar7));
      break;
    case 8:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c097e0c(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6,ar7));
      ar6 = (int *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c031c74(ar4,&(*(int *)(fr0_ - 0x1c)),ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c08e93c(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 140)), Vec3_dtor(&(*(int *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return iVar4;
}

__asm__(".globl _FUN_8c08e6e8\n.set _FUN_8c08e6e8, _FUN_8c08e6e8_def\n");
