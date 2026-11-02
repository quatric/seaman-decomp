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
undefined4 FUN_8c122358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c122358";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *a5;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *a6;
  
  puVar1 = ((void *)(unsigned)0x8c120348);
  iVar6 = *(int *)(unsigned)(0x108 + ar4);
  (*(uint *)(fr0_ - 0x3c)) = 0x7fffffff;
  (*(uint *)(fr0_ - 0x38)) = 0;
  (*(int *)(fr0_ - 0x34)) = *(int *)(unsigned)(0xfc + ar4);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120348(ar4 + 0x48,0x11,0,0));
  if (((uVar2 & 0xff) == 0) && (uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x22,0,0)), (uVar2 & 0xff) == 0)
     ) {
    uVar10 = 1;
    uVar2 = 0x12;
    puVar8 = &(*(undefined4 *)(fr0_ - 0x40));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x12,puVar8,1));
    a5 = (&(*(undefined1 *)(unsigned)0x8c1297e8));
    if ((uVar3 & 0xff) == 0) {
      *(unsigned *)(unsigned)(0xdc + ar4) = ((void *)(unsigned)0x8c121ef0);
      uVar3 = 0;
      if (*(int *)(unsigned)(0x240 + ar4) != 0) {
        do {
          uVar11 = 0;
          (*(int *)(fr0_ - 0x30)) = *(int *)(unsigned)(0x268 + ar4 + uVar3 * 8);
          (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(uVar3 * 8 + 0x268 + ar4 + 4);
          (*(int *)(fr0_ - 0x2c)) = 1;
          uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x2c))))(iVar6,uVar2,puVar8,uVar10));
          (*(int *)(fr0_ - 0x24)) = 0x280 + ar4;
          *(short *)(unsigned)(0x280 + ar4) = (short)uVar5;
          iVar4 = (*(int *)(fr0_ - 0x30)) + (*(int *)(fr0_ - 0x2c));
          a6 = (undefined4 *)(unsigned)0x0;
          if (*(int *)(unsigned)(0x240 + ar4) != 0) {
            do {
              uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x13,&(*(int *)(fr0_ - 0x30)),iVar4 * 2 + 0x10));
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar10 = 0;
              uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x21,0,0));
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              puVar8 = a6;
              uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c122230(ar4,a5,a6,uVar10));
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c1222b4(ar4,a5,puVar8,uVar10));
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar10 = *(undefined4 *)(unsigned)(0x24c + 0x18 + ar4);
              uVar11 = uVar11 + *(int *)(unsigned)(0x24c + ar4);
              uVar2 = uVar3;
              puVar8 = a6;
              (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c11f7bc(ar4,uVar3,a6,uVar10));
              a6 = (undefined4 *)(unsigned)((int)a6 + 1);
            } while (a6 < ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x240 + ar4)));
          }
          if (uVar11 < (*(uint *)(fr0_ - 0x3c))) {
            (*(uint *)(fr0_ - 0x3c)) = uVar11;
            (*(uint *)(fr0_ - 0x38)) = uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(unsigned)(0x240 + ar4));
      }
      uVar10 = 2;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,0x14,(*(undefined4 *)(fr0_ - 0x40)),2));
      if ((uVar2 & 0xff) == 0) {
        iVar9 = (int)0xf4;
        *(unsigned *)(unsigned)(0xdc + ar4) = ((void *)(unsigned)0x8c121f38);
        iVar9 = iVar9 + ar4;
        iVar6 = (int)0x288;
        iVar7 = (*(uint *)(fr0_ - 0x38)) * 8;
        *(short *)(unsigned)(iVar6 + ar4) = (short)*(undefined4 *)(unsigned)(iVar7 + 0x268 + ar4);
        iVar4 = (int)0x238;
        *((int *)(unsigned long)*(unsigned *)(unsigned)(iVar6 + -0x4c + ar4)) = *(int *)(unsigned)(0x268 + ar4 + iVar7) << 1;
        puVar8 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(iVar4 + ar4));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x34)) + 0x14))))
                          (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x23c + ar4)),iVar9,(*(undefined4 *)(fr0_ - 0x40)),uVar10));
        *puVar8 = uVar5;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c120f04(ar4,iVar9,(*(undefined4 *)(fr0_ - 0x40)),uVar10));
        if (iVar6 == 0) {
          (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c121690(ar4,(*(uint *)(fr0_ - 0x38)),(*(undefined4 *)(fr0_ - 0x40)),uVar10));
          (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x238 + ar4)),
                     *(undefined4 *)(unsigned)(0x268 + ar4 + iVar7 + 4),
                     *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x23c + ar4)),uVar10));
          return 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c122358\n.set _FUN_8c122358, _FUN_8c122358_def\n");
