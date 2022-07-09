
reg_errcode_t lower_subexps(void *extra,bin_tree_t *node)

{
  bin_tree_t *pbVar1;
  long in_FS_OFFSET;
  reg_errcode_t err;
  long local_20;
  
  pbVar1 = node->left;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  err = _REG_NOERROR;
  if ((pbVar1 != (bin_tree_t *)0x0) && ((pbVar1->token).field_0x8 == '\x11')) {
    pbVar1 = lower_subexp(&err,(regex_t *)extra,pbVar1);
    node->left = pbVar1;
    if (pbVar1 != (bin_tree_t *)0x0) {
      pbVar1->parent = node;
    }
  }
  pbVar1 = node->right;
  if ((pbVar1 != (bin_tree_t *)0x0) && ((pbVar1->token).field_0x8 == '\x11')) {
    pbVar1 = lower_subexp(&err,(regex_t *)extra,pbVar1);
    node->right = pbVar1;
    if (pbVar1 != (bin_tree_t *)0x0) {
      pbVar1->parent = node;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return err;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

