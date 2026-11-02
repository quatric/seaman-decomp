/* CItemGLoader / CItemGLoadRequestList - partial, read from three string-named methods. [H] unless marked.
 *   CItemGLoadRequestList_TakeOut   0x8C0FE95C  unlink a node from the list, count--   (errors via report_error_message if node==NULL)
 *   CItemGLoadRequestList_GetPtr    0x8C0FEA2C  node at index i, walking next-pointers; error if i<0 or i>count
 *   CItemGLoader_RegistToLoad       0x8C0FED70  take a free node from the pool at this+0x4C, set fields, append to the list
 * Layout (list object):  +0x48 int count   (the list head/links are at lower offsets, accessed through FUN_8c0d3f48 = next,
 *                        FUN_8c0dac48 = prev, FUN_8c0fdf08/10 = set next/prev)  [M]
 * Layout (loader object): +0x4C node pool (FUN_8c0fecb0 allocates a node)       [M]
 * Request node:  +0x08 param_a, +0x0C param_b, +0x10 state (=1 when registered)  [M: field names are guesses]
 * Note: GetPtr allows i == count (one past the end) - possible off-by-one in the original or a sentinel node.
 */
