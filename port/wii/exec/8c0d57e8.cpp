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
undefined4 s_GRAPHICS_ENV_0d57ee_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_ENV_0d57ee");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<undefined4>* ar5_00;
  undefined4 ar5_01;
  char *pcVar3;
  
  uVar2 = CONCAT31((int3)((uint)(*(le<undefined4>* )(fr0_ - 0x24)) >> 8),(char)ar6);
  ((le<undefined4>* )(fr0_ - 0x14))[0] = 0;
  ar5_00 = ar5;
  while( true ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7));
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_d0_0d3f70(ar4 + 0x34,ar5_00,ar6,ar7));
    ((le<undefined4>* )(fr0_ - 0x14))[0] = (vsp = ((unsigned long)(fr0_ - 36)), s_CWaterSnowList_GetWaterSnowO_0fe76c(ar4 + 0x34,iVar1 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), s_CWaterSnowList_TakeOut_0fe694(ar4 + 0x34,((le<undefined4>* )(fr0_ - 0x14))[0],ar6,ar7));
    ar5_00 = ((le<undefined4>* )(fr0_ - 0x14));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0fec4c(0x8c3e7d30,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0fe7f4(ar4 + 0x34,ar5_00,ar6,ar7));
  if ((char)uVar2 == '\x02') {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13fa0c),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13fa7a),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1); });
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f91e),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x10,0,pcVar3,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020a70(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    pcVar3 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c020b68(ar5,((undefined1 *)(unsigned)0x8c13f986),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
    ar5_01 = 0;
    ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c015ad4(ar4 + 0x1c,0,pcVar3,iVar1); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), s_Failed_s_015312(ar4 + 0x12a5c,ar5_01,pcVar3,iVar1));
  }
  return uVar2;
}

__asm__(".globl s_GRAPHICS_ENV_0d57ee\n.set s_GRAPHICS_ENV_0d57ee, s_GRAPHICS_ENV_0d57ee_def\n");

}
