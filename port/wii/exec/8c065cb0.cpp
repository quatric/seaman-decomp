#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c065cb0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c065cb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
  if (*(le<int>* )(unsigned)(ar4 + 900) != -1) goto LAB_8c065e2a;
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x104);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      break;
    case 1:
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x2d;
      break;
    case 4:
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
    }
  }
  iVar3 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(*(le<int>* )(unsigned)(ar6 + 4) + 0x78,ar5,ar6,ar7));
  if ((char)uVar1 == '\x01') {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar2 < 0xf) {
    if (0xd < iVar2) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0xf;
      goto LAB_8c065e2a;
    }
    if (5 < iVar2) {
      if (iVar2 == 9) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
        if (iVar3 == 0) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x19;
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
        }
      }
      goto LAB_8c065e2a;
    }
    if (iVar2 < 0) goto LAB_8c065e2a;
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x37;
      }
      else if (iVar2 == 5) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
  }
  else {
    if (0x13 < iVar2) {
      if (iVar2 == 0x2f) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
    if (0x12 < iVar2) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x23;
      goto LAB_8c065e2a;
    }
    if (iVar2 != 0x10) goto LAB_8c065e2a;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
  if (iVar3 == 0) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 3) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 4) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
LAB_8c065e2a:
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl FUN_8c065cb0\n.set FUN_8c065cb0, FUN_8c065cb0_def\n");

}
