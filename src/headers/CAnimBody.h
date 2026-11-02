/* CAnimBody - partial layout recovered from the decompiled methods (Seaman USA, Dreamcast).
 * Confidence: [H] read/written with clear meaning, [M] meaning inferred from usage, [L] guess.
 * Methods (names come from embedded debug strings, addresses are the real function starts):
 *   SetAnimation  0x8C033A8C  (110 callers)
 *   AdvanceFrame  0x8C033B98 / 0x8C033D88  (two overloads, 48 / 19 callers)
 *   SetFrame      0x8C033E68  (104 callers)
 *   SetInterpolate, CheckThisMotionData 0x8C0314FC
 */
typedef struct CAnimBody {
    unsigned char _unk00[0x10];
    int   motionCount;      /* +0x10 [H] SetAnimation rejects motion >= this with an error message          */
    unsigned char _unk14[8];
    int   curMotion;        /* +0x1c [H] current motion index; <0 means "none" (error + reset to 0)         */
    float curFrame;         /* +0x20 [H] SetFrame stores the frame here; compared against frameCount-1      */
    int   _field24;         /* +0x24 [M] integer converted to float in AdvanceFrame (rate/step related)     */
    float curSpeed;         /* +0x28 [M] set together with curMotion on an immediate SetAnimation           */
    int   queuedMotion;     /* +0x2c [H] -1 = nothing queued; promoted to curMotion when the motion ends     */
    float queuedSpeed;      /* +0x30 [M] speed that goes with queuedMotion                                  */
    unsigned char _unk34[0x20];
    unsigned char locked;   /* +0x54 [M] when ==1 SetAnimation refuses and returns 3                        */
    unsigned char _unk55[0x13];
    float _field68;         /* +0x68 [L] read by a wrapper (0x8C026858) and passed to AdvanceFrame          */
    unsigned char _unk6c[4];
    int   motionEnded;      /* +0x70 [H] set to 1 when the last frame is passed; cleared by Set*/Advance*   */
} CAnimBody;

/* SetAnimation(self, motion, mode, speed) -> status code
 *   mode -1 : switch immediately            -> returns 0
 *   mode  0 : queue unless the current one already ended
 *   mode  1 : blend via SetInterpolate      -> returns 2
 *   returns: 6 = same motion already playing, 3 = locked, 4 = bad index, 1 = queued, -1 = bad mode
 */
