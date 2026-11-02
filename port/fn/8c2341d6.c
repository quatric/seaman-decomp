#include "../decls.h"
uint FUN_8c2341d6_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  short sVar4;
  float fVar5;
  float fVar6;
  int a4;
  int a5;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar7;
  
  DAT_8c277b10 = 0xfffffffe;
  _DAT_8c4aa3d4 = *(uint *)(_DAT_8c4aabdc + 8);
  _DAT_8c4aa3dc = _DAT_8c4aa3d4 & 0xfc000000;
  _DAT_8c4aa3d8 = _DAT_8c4aa3d4 >> 0x18 & 0x1c;
  _DAT_8c4aa3d0 = (undefined4 *)((_DAT_8c4aa3d4 & 0x3ffffff | 0xe0000000) + 0x10);
  _DAT_ff000038 = _DAT_8c4aa3d8;
  _DAT_ff00003c = _DAT_8c4aa3d8;
  *_DAT_8c4aa3d0 = _DAT_8c4aa390;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c0;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c4;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3cc;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + -1;
  *_DAT_8c4aa3d0 = _DAT_8c4aa3c8;
  _DAT_8c4aa3d0 = _DAT_8c4aa3d0 + 8;
  if (in_FPSCR_SZ == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa394,(float)(int)(short)((uint)ar4 >> 0x10));
  }
  else {
    dVar7 = (double)CONCAT44((*(uint *)0x8c4aa398),_DAT_8c4aa394);
  }
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    fVar5 = SUB84(dVar7,0) * fVar6;
    dVar7 = (double)CONCAT44(fVar6,fVar5);
    a4 = (int)fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    a4 = (int)dVar7;
  }
  fVar5 = (float)((ulonglong)dVar7 >> 0x20);
  dVar7 = (double)CONCAT44(fVar5,(float)(int)(short)ar4);
  if (in_FPSCR_PR == '\0') {
    fVar6 = (float)(int)(short)ar4 * fVar5;
    dVar7 = (double)CONCAT44(fVar5,fVar6);
    a5 = (int)fVar6;
  }
  else {
    dVar7 = dVar7 * dVar7;
    a5 = (int)dVar7;
  }
  uVar2 = log_message(ar5,&DAT_8c4aa3d8,&DAT_8c4aa3d4,ar7);
  sVar4 = 0;
  if (0 < (short)uVar2) {
    do {
      fVar5 = SUB84(dVar7,0);
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      FUN_8c2340a0(a4,a5,(int)cVar1,ar7);
      if (in_FPSCR_SZ == '\0') {
        fVar5 = _DAT_8c4aa394;
      }
      sVar4 = sVar4 + 1;
      if (in_FPSCR_PR == '\0') {
        fVar6 = (float)(int)(short)a4 + fVar5;
        dVar7 = (double)CONCAT44(fVar6,fVar5);
        a4 = (int)fVar6;
      }
      else {
        dVar7 = (double)(int)(short)a4;
        dVar7 = dVar7 + dVar7;
        a4 = (int)dVar7;
      }
    } while (sVar4 < (short)uVar2);
  }
  uVar3 = (uint)_DAT_8c4aa3d0 & 0x3ffffff | _DAT_8c4aa3dc;
  *(uint *)(_DAT_8c4aabdc + 8) = uVar3;
  return uVar3;
}

__asm__(".globl _FUN_8c2341d6\n.set _FUN_8c2341d6, _FUN_8c2341d6_def\n");
