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
undefined4 FUN_8c1f5290_def(undefined4 ar4,byte *ar5,int ar6,char *ar7)

{
  TRACE_ENTER("FUN_8c1f5290");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<uint>*  s0 = (le<uint>* )(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  char cVar2;
  int iVar3;
  char *ar5_00;
  le<uint>* ar6_00;
  char *ar7_00;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1f518e(ar7,s0,ar6,ar7));
  ar7[2] = '\0';
  ar7[3] = '\0';
  ar5_00 = (char *)(unsigned)(uint)(byte)ar4;
  if ((ar5[2] & (byte)ar4) != 0) {
    ar7[4] = '\x01';
    *ar7 = '\0';
    *(le<int>* )(unsigned)(ar7 + 0x24) = *(le<int>* )(unsigned)(ar7 + 0x24) + 1;
  }
  if ((ar5[3] & (byte)ar4) != 0) {
    ar7[4] = '\x04';
    *ar7 = '\0';
    ar7[3] = '\x01';
    ar7[0x24] = '\0';
    ar7[0x25] = '\0';
    ar7[0x26] = '\0';
    ar7[0x27] = '\0';
  }
  piVar1 = 0x8c4727b4;
  ar6_00 = (le<uint>* )(unsigned)(int)0xff;
  cVar2 = (char)0xff;
  if ((*ar5 & (byte)ar4) == 0) {
    ar7[4] = cVar2;
    *ar7 = '\0';
    goto LAB_8c1f535e;
  }
  if (ar7[7] == '\0') {
    cVar2 = *ar7;
joined_r0x8c1f5348:
    if (cVar2 == '\0') goto LAB_8c1f535e;
  }
  else {
    if (ar7[7] != '\x01') {
      if (ar7[7] == '\x04') {
        ar7[3] = '\x01';
        goto LAB_8c1f533a;
      }
      cVar2 = ar7[7];
      goto joined_r0x8c1f5348;
    }
    if (ar7[8] != '\x05') {
      iVar3 = (int)0x10d8;
      *(le<int>* )(unsigned)(ar7 + 0x24) = *(le<int>* )(unsigned)(ar7 + 0x24) + 1;
      if (*(le<uint>* )(unsigned)(ar7 + 0x24) <= *(le<uint>* )(unsigned)(iVar3 + *piVar1)) {
        ar7[4] = '\x01';
        goto LAB_8c1f535e;
      }
LAB_8c1f533a:
      *ar7 = '\0';
      ar7[4] = cVar2;
      ar7[0x24] = '\0';
      ar7[0x25] = '\0';
      ar7[0x26] = '\0';
      ar7[0x27] = '\0';
      goto LAB_8c1f535e;
    }
    ar7[2] = '\x01';
    *ar7 = '\x01';
  }
  ar7[4] = '\0';
LAB_8c1f535e:
  if ((((*ar7 != '\0') && (ar7[7] != '\0')) && (*(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4727b4 + (int)0x10c4) == 1))
     && ((*s0 != 0xffffffff && (*s0 != (int)(int)0xffffff00)))) {
    ar5_00 = (char *)(unsigned)((*s0 & 0xff) + 1);
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1f4780(s0,ar5_00,ar6_00,ar7_00));
  }
  if (ar7[2] != '\0') {
    *(undefined1 *)(unsigned)(ar6 + 0x10) = 0;
    ar5_00 = ar7;
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1f53c2(ar6,ar7,s0,ar7_00));
    ar6_00 = s0;
  }
  if (ar7[3] != '\0') {
    *(undefined1 *)(unsigned)(ar6 + 0x10) = 0;
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1f5506(ar6,ar5_00,ar6_00,ar7_00));
  }
  return 0;
}

__asm__(".globl FUN_8c1f5290\n.set FUN_8c1f5290, FUN_8c1f5290_def\n");

}
