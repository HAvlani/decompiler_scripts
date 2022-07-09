
reg_errcode_t
postorder(bin_tree_t *root,anon_subr_reg_errcode_t_void_ptr_bin_tree_t_ptr *fn,void *extra)

{
  bin_tree_t *pbVar1;
  reg_errcode_t rVar2;
  bin_tree_t *pbVar3;
  
  do {
    do {
      do {
        pbVar3 = root;
        root = pbVar3->left;
      } while (pbVar3->left != (bin_tree_t *)0x0);
      root = pbVar3->right;
    } while (pbVar3->right != (bin_tree_t *)0x0);
    rVar2 = (*fn)(extra,pbVar3);
    while( true ) {
      if ((rVar2 != _REG_NOERROR) || (pbVar1 = pbVar3->parent, pbVar1 == (bin_tree_t *)0x0)) {
        return rVar2;
      }
      root = pbVar1->right;
      if ((root != (bin_tree_t *)0x0) && (root != pbVar3)) break;
      rVar2 = (*fn)(extra,pbVar1);
      pbVar3 = pbVar1;
    }
  } while( true );
}

