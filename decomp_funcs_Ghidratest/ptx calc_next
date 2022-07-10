
reg_errcode_t calc_next(void *extra,bin_tree_t *node)

{
  char cVar1;
  bin_tree_t *pbVar2;
  bin_tree_t *pbVar3;
  
  cVar1 = (node->token).field_0x8;
  pbVar2 = node->left;
  if (cVar1 == '\v') {
    pbVar2->next = node;
    return _REG_NOERROR;
  }
  if (cVar1 != '\x10') {
    if (pbVar2 != (bin_tree_t *)0x0) {
      pbVar2->next = node->next;
    }
    if (node->right != (bin_tree_t *)0x0) {
      node->right->next = node->next;
    }
    return _REG_NOERROR;
  }
  pbVar3 = node->right;
  pbVar2->next = pbVar3->first;
  pbVar3->next = node->next;
  return _REG_NOERROR;
}

