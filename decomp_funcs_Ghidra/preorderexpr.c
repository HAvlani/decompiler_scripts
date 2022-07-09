
reg_errcode_t
preorder(bin_tree_t *root,anon_subr_reg_errcode_t_void_ptr_bin_tree_t_ptr *fn,void *extra)

{
  bin_tree_t **ppbVar1;
  reg_errcode_t rVar2;
  bin_tree_t *pbVar3;
  bin_tree_t *pbVar4;
  
  do {
    do {
      rVar2 = (*fn)(extra,root);
      if (rVar2 != _REG_NOERROR) {
        return rVar2;
      }
      pbVar3 = root->left;
      pbVar4 = root;
      root = pbVar3;
    } while (pbVar3 != (bin_tree_t *)0x0);
    while ((root = pbVar4->right, root == (bin_tree_t *)0x0 || (root == pbVar3))) {
      ppbVar1 = &pbVar4->parent;
      pbVar3 = pbVar4;
      pbVar4 = *ppbVar1;
      if (*ppbVar1 == (bin_tree_t *)0x0) {
        return _REG_NOERROR;
      }
    }
  } while( true );
}

