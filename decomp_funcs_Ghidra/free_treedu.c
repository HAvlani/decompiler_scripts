
reg_errcode_t free_tree(void *extra,bin_tree_t *node)

{
  free_token(&node->token);
  return _REG_NOERROR;
}

