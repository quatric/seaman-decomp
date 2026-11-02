/* Vec3 - 16-byte polymorphic vector class (Seaman USA). All fields [H]: every method below was read in full.
 * The vtable pointer sits at +0xC (after xyz) and every constructor writes 0x8C129A7C there.
 * Vtable at 0x8C129A7C has layout [0, 0, dtor] - the two zero words look like a GCC 2.x style header.
 */
typedef struct Vec3 {
    float x;      /* +0x0 */
    float y;      /* +0x4 */
    float z;      /* +0x8 */
    void *vptr;   /* +0xC -> 0x8C129A7C */
} Vec3;

/* Vec3_ctor_zero  0x8C022C4C (220 callers)  this->vptr=VT; x=y=z=0
 * Vec3_ctor_copy  0x8C022C88 (138)          this->vptr=VT; copy xyz from other
 * Vec3_ctor_xyz   0x8C022CE8 (125)          this->vptr=VT; x,y,z from args (this is the LAST arg in the SH calling convention here)
 * Vec3_assign     0x8C023A14 (201)          copy xyz, leaves vptr untouched
 * Vec3_dtor       0x8C022CB0 (341)          resets vptr, frees the object if (flags > 0)  -- compiler-generated deleting dtor
 * The FPSCR.SZ branches in the decompiler output are SH-4 paired-move artifacts, not real behaviour.
 */
