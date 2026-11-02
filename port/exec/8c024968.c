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
int s_GRAPHICS_COMMON_02496e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_COMMON_02496e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined **ar5_00;
  undefined4 uVar4;
  char *ar6_00;
  undefined4 ar7_00;
  char cVar5;
  
  cVar5 = '\0';
  *(unsigned *)0x8c27d1fc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fcac));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d200) = 300;
  *(unsigned *)0x8c27d204 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd28));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d208) = 6;
  *(unsigned *)0x8c27d20c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd34));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d210) = 0x10;
  *(unsigned *)0x8c27d214 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd58));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d218) = 6;
  *(unsigned *)0x8c27d21c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd64));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d220) = 0x10;
  *(unsigned *)0x8c27d224 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd40));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d228) = 6;
  *(unsigned *)0x8c27d22c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd4c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d230) = 0x10;
  *(unsigned *)0x8c27d234 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c12fd70));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d238) = 8;
  *(unsigned *)0x8c27d23c = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d240) = 0x8c1651ec;
  *(unsigned *)0x8c27d244 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c167b80));
  *(unsigned *)0x8c27d248 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16a514));
  *(unsigned *)0x8c27d24c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16cea8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d354) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d356) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d358) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d35a) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d35c) = 5;
  *(unsigned *)0x8c27d250 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16f83c));
  *(unsigned *)0x8c27d254 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1721d0));
  *(unsigned *)0x8c27d258 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c174b64));
  *(unsigned *)0x8c27d25c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1774f8));
  *(unsigned *)0x8c27d260 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c179e8c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d35e) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d360) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d362) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d364) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d366) = 5;
  *(unsigned *)0x8c27d264 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a0e38));
  *(unsigned *)0x8c27d268 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a37cc));
  *(unsigned *)0x8c27d26c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a6160));
  *(unsigned *)0x8c27d270 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a0e38));
  *(unsigned *)0x8c27d274 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1a8af4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d368) = 0x1e;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d36a) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d36c) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d36e) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d370) = 5;
  *(unsigned *)0x8c27d278 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d4dc8));
  *(unsigned *)0x8c27d27c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d775c));
  *(unsigned *)0x8c27d280 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1da0f0));
  *(unsigned *)0x8c27d284 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d4dc8));
  *(unsigned *)0x8c27d288 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1dca84));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d372) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d374) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d376) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d378) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d37a) = 5;
  *(unsigned *)0x8c27d28c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c17c820));
  *(unsigned *)0x8c27d290 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c17c820));
  *(unsigned *)0x8c27d294 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c17f1b4));
  *(unsigned *)0x8c27d298 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c181b48));
  *(unsigned *)0x8c27d29c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1844dc));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d37c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d37e) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d380) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d382) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d384) = 5;
  *(unsigned *)0x8c27d2a0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1967e8));
  *(unsigned *)0x8c27d2a4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c19917c));
  *(unsigned *)0x8c27d2a8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c19bb10));
  *(unsigned *)0x8c27d2ac = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1967e8));
  *(unsigned *)0x8c27d2b0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c19e4a4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d386) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d388) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d38a) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d38c) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d38e) = 5;
  *(unsigned *)0x8c27d2b4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c5450));
  *(unsigned *)0x8c27d2b8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ca778));
  *(unsigned *)0x8c27d2bc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1cd10c));
  *(unsigned *)0x8c27d2c0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1cfaa0));
  *(unsigned *)0x8c27d2c4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1d2434));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d390) = 0x1e;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d392) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d394) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d396) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d398) = 5;
  *(unsigned *)0x8c27d2c8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ab488));
  *(unsigned *)0x8c27d2cc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ade1c));
  *(unsigned *)0x8c27d2d0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b07b0));
  *(unsigned *)0x8c27d2d4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b3144));
  *(unsigned *)0x8c27d2d8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b5ad8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d39a) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d39c) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d39e) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a0) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a2) = 5;
  *(unsigned *)0x8c27d2dc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b846c));
  *(unsigned *)0x8c27d2e0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1b846c));
  *(unsigned *)0x8c27d2e4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1bae00));
  *(unsigned *)0x8c27d2e8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1bd794));
  *(unsigned *)0x8c27d2ec = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c0128));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a4) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a6) = 5;
  ar7_00 = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3a8) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3aa) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ac) = 5;
  *(unsigned *)0x8c27d2f0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1df418));
  *(unsigned *)0x8c27d2f4 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e4740));
  *(unsigned *)0x8c27d2f8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e70d4));
  *(unsigned *)0x8c27d2fc = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e9a68));
  *(unsigned *)0x8c27d300 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1ec3fc));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ae) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b0) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b2) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b4) = 5;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b6) = 5;
  *(unsigned *)0x8c27d304 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c189804));
  *(unsigned *)0x8c27d308 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c18c198));
  *(unsigned *)0x8c27d30c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c18eb2c));
  *(unsigned *)0x8c27d310 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1914c0));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3b8) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ba) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3bc) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3be) = 8;
  *(unsigned *)0x8c27d314 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c186e70));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c0) = 10;
  *(unsigned *)0x8c27d318 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c2abc));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c2) = 0x1e;
  *(unsigned *)0x8c27d31c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16a514));
  *(unsigned *)0x8c27d320 = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c4) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c6) = 3;
  *(unsigned *)0x8c27d324 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c16a514));
  *(unsigned *)0x8c27d328 = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3c8) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ca) = 8;
  *(unsigned *)0x8c27d33c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c7de4));
  *(unsigned *)0x8c27d340 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c5450));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d4) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d6) = 3;
  *(unsigned *)0x8c27d344 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c7de4));
  *(unsigned *)0x8c27d348 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1c5450));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d8) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3da) = 8;
  *(unsigned *)0x8c27d32c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e1dac));
  *(unsigned *)0x8c27d330 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1df418));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3cc) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3ce) = 3;
  *(unsigned *)0x8c27d334 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1e1dac));
  *(unsigned *)0x8c27d338 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1df418));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d0) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3d2) = 8;
  *(unsigned *)0x8c27d34c = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c193e54));
  *(unsigned *)0x8c27d350 = (unsigned)(unsigned long)(((undefined4 *)(unsigned)0x8c162858));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3dc) = 4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27d3de) = 4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c015508(0x8c27d3e0,((undefined1 *)(unsigned)0x8c143df8),((undefined1 *)(unsigned)0x8c27d1fc),5); });
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c27d23c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) = (*((undefined4 *)(unsigned long)*(unsigned *)0x8c27d23c) >> 0x10) + 2;
  uVar4 = 8;
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c23c814(0x8c279308,((undefined4 *)(unsigned long)*(unsigned *)0x8c27d23c),8,ar7_00));
  iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) + -1;
  puVar3 = (uint *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) + -1) * 4 + -0x73d86cf8);
  if (cVar5 == '\0') {
    *puVar3 = puVar1[iVar2];
  }
  else {
    *(undefined8 *)(unsigned)puVar3 = *(undefined8 *)(unsigned)(puVar1 + iVar2);
  }
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c015508(0x8c27d3e4,&(*(undefined4 *)(unsigned)(unsigned)0x8c14442c),uVar4,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c015ad4(0x8c27d3e8,((undefined1 *)(unsigned)0x8c146400),uVar4,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); Class_129920_m0_015248(0x8c27d3ec,&(*(undefined4 *)(unsigned)(unsigned)0x8c143e1c),uVar4,ar7_00); });
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c1444b0);
  (vsp = ((unsigned long)(fr0_ - 40)), Class_129920_m0_015248(0x8c27d3f4,&(*(undefined4 *)(unsigned)(unsigned)0x8c1444b0),uVar4,ar7_00));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_4_0253e4(0x8c27d3ec,ar5_00,uVar4,ar7_00));
  ar6_00 = "GRAPHICS\\COMMON";
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c020ef0(ar4,"COMMON_EYE","GRAPHICS\\COMMON",uVar4));
  if (iVar2 == 0) {
    uVar4 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 40)), report_error_message("Failed to load eye textuer..",((undefined1 *)(unsigned)0x8c12fde4),0,2));
  }
  uVar4 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_4_0253e4(0x8c27d3f4,0x8c27d3f4,ar6_00,uVar4));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c020ef0(ar4,"COMMON_SCSI","GRAPHICS\\COMMON",uVar4));
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), report_error_message("Failed to load scsi textuer..",((undefined1 *)(unsigned)0x8c12fde4),0,2));
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_COMMON_02496e\n.set _s_GRAPHICS_COMMON_02496e, _s_GRAPHICS_COMMON_02496e_def\n");
