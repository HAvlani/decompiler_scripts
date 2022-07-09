
reg_errcode_t mark_opt_subexp(void *extra,bin_tree_t *node)

{
  undefined *puVar1;
  
  if (((node->token).field_0x8 == '\x11') && (extra == (void *)(node->token).opr)) {
    puVar1 = &(node->token).field_0xa;
    *puVar1 = *puVar1 | 8;
    return _REG_NOERROR;
  }
  return _REG_NOERROR;
}

