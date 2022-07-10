
bin_tree_t * duplicate_tree(bin_tree_t *root,re_dfa_t *dfa)

{
  undefined *puVar1;
  bin_tree_t *pbVar2;
  bin_tree_t *pbVar3;
  bin_tree_t *pbVar4;
  bin_tree_t **ppbVar5;
  long in_FS_OFFSET;
  bin_tree_t *dup_root;
  long local_30;
  
  ppbVar5 = &dup_root;
  pbVar4 = root->parent;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    pbVar2 = create_token_tree();
    *ppbVar5 = pbVar2;
    if (pbVar2 == (bin_tree_t *)0x0) break;
    pbVar2->parent = pbVar4;
    pbVar4 = *ppbVar5;
    puVar1 = &(pbVar4->token).field_0xa;
    *puVar1 = *puVar1 | 4;
    pbVar3 = root->left;
    if (pbVar3 == (bin_tree_t *)0x0) {
      while ((pbVar2 = root->right, pbVar2 == (bin_tree_t *)0x0 || (pbVar2 == pbVar3))) {
        ppbVar5 = &root->parent;
        pbVar4 = pbVar4->parent;
        pbVar2 = dup_root;
        pbVar3 = root;
        root = *ppbVar5;
        if (*ppbVar5 == (bin_tree_t *)0x0) goto LAB_00108034;
      }
      ppbVar5 = &pbVar4->right;
      root = pbVar2;
    }
    else {
      ppbVar5 = &pbVar4->left;
      root = pbVar3;
    }
  }
LAB_00108034:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pbVar2;
}

